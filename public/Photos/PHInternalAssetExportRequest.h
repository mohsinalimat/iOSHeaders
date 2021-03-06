//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetExportRequest.h>

@class NSObject, PHResourceDownloadRequest;
@protocol OS_dispatch_queue;

@interface PHInternalAssetExportRequest : PHAssetExportRequest
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHResourceDownloadRequest *_downloadRequest;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
+ (id)_variantsForAsset:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(_Bool *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4;
- (id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3;

@end

