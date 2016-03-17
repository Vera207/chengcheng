//
//  MediaManager.h
//  MultimediaManager
//
//  Created by chenshenyi on 15/12/8.
//  Copyright © 2015年 chenshenyi. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum{
    MediaQualityTypeHigh = 0,
    MediaQualityTypeMedium,
    MediaQualityTypeLow
}MediaQualityType;

typedef enum {
    EC_fileEncode_failure = 201, //文件格式转换失败
    EC_JSONCreation_failure,     //文件信息JSON串创建失败
    EC_thumbnailCreation_failure,//生成视频缩略图失败
    EC_imageCapture_failure      //获取照片失败
}ErrorCode;

typedef enum {
    MediaTypeImage = 1,
    MediaTypeAudio = 2,
    MediaTypevideo = 4
}MediaType;
//info dict keys
static NSString *const MediaFilePath = @"mediaFilePath";                  // NSString
static NSString *const MediaFileType = @"mediaFileType";                  // NSString
static NSString *const MediaFileRecorderTime = @"mediaFileRecorderTime";  // long
static NSString *const MediaFileMD5 = @"mediaFileMD5";                    // NSString
static NSString *const MediaFileLength = @"mediaFileLength";              // int
static NSString *const MediaFileThumbnail = @"mediaFileThumbnail";        // UIImage
static NSString *const MediaFileJSONInfo = @"jsonInfo";                   // JSONData
static NSString *const MediaFileOriginalImage = @"mediaFileOriginalImage";// UIImage

static NSString *const AllMediaFileInfoSavePath = @"/Documents/fileInfo.plist";
static NSString *const MediaPhotoType = @"mediaPhotoType";                // 

@interface MediaManager : NSObject
typedef void(^GetFileInfoSuccessBlock)(NSDictionary *SuccessInfo);
typedef void(^GetFileInfoFailureBlock)(ErrorCode errorCode);

@property (nonatomic, assign)MediaType mediaType;
@property (nonatomic, copy)GetFileInfoSuccessBlock success;
@property (nonatomic, copy)GetFileInfoFailureBlock failure;

- (NSArray *)getAllMediaFileInfoArray;

- (void)deleteFileInfoWithMd5:(NSString *)fileMd5;
@end
