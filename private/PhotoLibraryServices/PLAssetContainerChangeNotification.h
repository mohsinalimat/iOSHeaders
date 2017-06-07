//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, NSObject;
@protocol PLAlbumProtocol, PLAssetContainer;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification
{
    _Bool _titleDidChange;
    _Bool _keyAssetDidChange;
    NSDictionary *_userInfo;
}

+ (id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;
- (void)_calculateDiffs;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_contentRelationshipName;
- (id)assetContainer;
- (_Bool)hasDeletes;
@property(readonly, nonatomic) _Bool keyAssetDidChange;
@property(readonly, nonatomic) _Bool titleDidChange;
@property(readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *album;
@property(readonly, retain, nonatomic) id <PLAssetContainer> container;
- (id)description;
- (id)userInfo;
- (id)name;
- (void)dealloc;

@end

