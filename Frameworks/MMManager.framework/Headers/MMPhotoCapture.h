//
//  MMPhotoCapture.h
//  MMManager
//
//  Created by chenshenyi on 15/12/17.
//  Copyright © 2015年 chenshenyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MediaManager.h"
@interface MMPhotoCapture : MediaManager

@property (nonatomic, strong)UIView *previewView;
@property (nonatomic, copy) NSString *savePath;
//设置block

- (void)capturePhoto;
- (void)capturePhotoWithPhotoBlock:(void(^)(UIImage * photo))photoBlock;
- (void)savePhotoInfoWithPhotoType:(NSString *)photoType;
- (void)setPhotoCaptureBlockWithSuccess:(GetFileInfoSuccessBlock)success failure:(GetFileInfoFailureBlock)failure;

@end
