//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSData, NSError, _GEOSimpleTileRequesterOperation;

@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
- (NSData *)verifyDataIntegrity:(NSData *)arg1 checksumMethod:(int)arg2;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (void)operationFailed:(_GEOSimpleTileRequesterOperation *)arg1 error:(NSError *)arg2;
- (void)operationFinished:(_GEOSimpleTileRequesterOperation *)arg1;
@end

