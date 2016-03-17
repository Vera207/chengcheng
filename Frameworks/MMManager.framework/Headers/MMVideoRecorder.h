//
//  MMVideoRecorder.h
//  MultimediaManager
//
//  Created by chenshenyi on 15/12/8.
//  Copyright © 2015年 chenshenyi. All rights reserved.
//

#import "MediaManager.h"
#import <UIKit/UIKit.h>
@interface MMVideoRecorder : MediaManager

@property (nonatomic) MediaQualityType videoQuality;
@property (nonatomic, assign) int duration;
@property (nonatomic, copy) NSString *savePath;
@property (nonatomic, strong)UIView *preViewView;
//设置block
- (void)setVideoEncodeFinishBlockWithSuccess:(GetFileInfoSuccessBlock)success failure:(GetFileInfoFailureBlock)failure;

- (void)startRecordvideo;
- (void)pauseRecordVideo;
- (void)resumeRecordVideo;
- (void)stopRecordvideo;
@end
