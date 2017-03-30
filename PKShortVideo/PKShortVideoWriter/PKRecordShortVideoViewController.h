//
//  PKShortVideoViewController.h
//  DevelopWriterDemo
//
//  Created by jiangxincai on 16/1/14.
//  Copyright © 2016年 pepsikirk. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PKRecordShortVideoDelegate <NSObject>

- (void)didFinishRecordingToOutputFilePath:(NSString *)outputFilePath;

@end

@interface PKRecordShortVideoViewController : UIViewController

@property (nonatomic, assign) NSTimeInterval videoMaximumDuration;
@property (nonatomic, assign) NSTimeInterval videoMinimumDuration;
@property (nonatomic, weak) id<PKRecordShortVideoDelegate> delegate;

- (instancetype)initWithOutputFilePath:(NSString *)outputFilePath outputSize:(CGSize)outputSize themeColor:(UIColor *)themeColor;

/**
 * 设置录制完成后 录制按钮显示的文字
 */
- (void) setFinishRecordingRecorderBtnTitle:(NSString*)title;
@end
