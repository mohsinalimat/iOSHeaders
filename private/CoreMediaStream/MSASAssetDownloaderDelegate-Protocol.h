//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSASAssetDownloader, MSAsset, NSError, NSString;

@protocol MSASAssetDownloaderDelegate <NSObject>
- (void)MSASAssetDownloaderDidFinishBatch:(MSASAssetDownloader *)arg1;
- (void)MSASAssetDownloader:(MSASAssetDownloader *)arg1 didFinishDownloadingAsset:(MSAsset *)arg2 inAlbumGUID:(NSString *)arg3 error:(NSError *)arg4;
- (void)MSASAssetDownloader:(MSASAssetDownloader *)arg1 willBeginBatchCount:(unsigned long long)arg2;
@end
