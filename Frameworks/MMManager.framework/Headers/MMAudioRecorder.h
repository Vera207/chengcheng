//
//  MMAudioRecorder.h
//  MultimediaManager
//
//  Created by chenshenyi on 15/12/8.
//  Copyright © 2015年 chenshenyi. All rights reserved.
//

#import "MediaManager.h"
@interface MMAudioRecorder : MediaManager
{
    float _mediaCurrentTime;
}
@property (nonatomic) MediaQualityType audioQuality;
@property (nonatomic, assign) int duration;
@property (nonatomic, copy) NSString *savePath;


//@property (nonatomic, assign,readwrite) int mediaCurrentTime;
- (void)setAudioEncodeFinishBlockWithSuccess:(GetFileInfoSuccessBlock)success failure:(GetFileInfoFailureBlock)failure;
//开始录音
- (void)startRecordAudio;
//暂停录音
- (void)pauseRecordAudio;
//完成录音
- (void)stopRecordAudio;
//开始播放
- (void)playAudioWithFilePath:(NSString *)filePath;
- (void)playAudioWithFileUrl:(NSURL *)fileUrl;
- (void)playAudioWithFileData:(NSData *)fileData;

- (void)setMediaCurrentTime:(float)newMediaCurrentTime;

- (float)mediaCurrentTime;

- (void)pausePlay;

- (void)continuePlay;


@end
