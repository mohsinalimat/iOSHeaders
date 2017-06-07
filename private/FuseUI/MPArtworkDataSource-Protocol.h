//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPArtworkCatalog, MPArtworkRepresentation, NSDictionary;
@protocol NSCopying;

@protocol MPArtworkDataSource <NSObject>
- (id <NSCopying>)visualIdenticalityIdentifierForCatalog:(MPArtworkCatalog *)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (void)loadRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1 completionHandler:(void (^)(MPArtworkRepresentation *, NSError *))arg2;
- (MPArtworkRepresentation *)existingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (_Bool)isRepresentation:(MPArtworkRepresentation *)arg1 bestRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(MPArtworkCatalog *)arg1;

@optional
- (_Bool)hasExistingRepresentationOnDiskForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3 systemEffectHandler:(void (^)(void (^)(id, NSError *)))arg4 completionHandler:(void (^)(id, NSError *))arg5;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3;
@end

