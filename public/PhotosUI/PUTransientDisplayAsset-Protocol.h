//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUDisplayAsset-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol PUTransientDisplayAsset <PUDisplayAsset>
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, nonatomic, getter=isHDR) _Bool HDR;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@end

