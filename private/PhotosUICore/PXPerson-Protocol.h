//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol NSFastEnumeration;

@protocol PXPerson <NSObject>
+ (void)px_loadRepresentativeFacesForPersons:(id <NSFastEnumeration>)arg1;
@property(readonly) _Bool isPersonModel;
@property(readonly) _Bool isVerified;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) NSString *px_displayName;
@property(readonly) NSString *name;
@property(readonly) unsigned long long numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 round:(_Bool)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(void (^)(UIImage *, struct CGRect, NSError *))arg6;

@optional
@property(readonly) NSDate *px_keyPhotoDate;
@end

