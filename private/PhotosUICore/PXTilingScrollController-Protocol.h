//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingScrollInfo;
@protocol PXTilingScrollControllerUpdateDelegate;

@protocol PXTilingScrollController <NSObject>
@property(copy, nonatomic) PXTilingScrollInfo *scrollInfo;
@property(nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) struct CGRect constrainedVisibleRect;
@property(readonly, nonatomic) struct CGRect visibleRect;
@property(readonly, nonatomic) struct CGRect activeRect;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
@property(readonly, nonatomic) struct CGSize referenceSize;
@property(nonatomic) __weak id <PXTilingScrollControllerUpdateDelegate> updateDelegate;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
@end

