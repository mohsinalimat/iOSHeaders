//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSessionImplementation-Protocol.h>

@class CPLChangeBatch;

@protocol CPLPullChangeSessionImplementation <CPLChangeSessionImplementation>
- (void)acknowledgeChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, NSString *))arg2;
- (void)getChangeBatchWithCompletionHandler:(void (^)(NSError *, CPLChangeBatch *))arg1;
@end

