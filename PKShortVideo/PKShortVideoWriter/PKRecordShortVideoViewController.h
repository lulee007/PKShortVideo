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
- (void) customFinishRecordingRecorderBtnTitle:(NSString*)title;

/**
 * 设置最长录制时间
 */

- (void) customVideoMaximumDuration:(NSTimeInterval)duration;

/**
 * 设置最短录制时间
 */

- (void) customVideoMinimumDuration:(NSTimeInterval)duration;
@end

@interface UIImage (MyBundle)

+ (UIImage *)imageNamedFromMyBundle:(NSString *)name;

@end
