//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreAssetPlaybackResponse.h>

@class MPStoreHLSAssetInfo, NSArray, NSDate, NSDictionary;

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse
{
}

@property(retain, nonatomic) id suzeLeaseID; // @dynamic suzeLeaseID;
@property(retain, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo; // @dynamic hlsAssetInfo;
@property(copy, nonatomic) NSArray *fileAssetInfoList; // @dynamic fileAssetInfoList;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSDictionary *dialogDictionary; // @dynamic dialogDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

