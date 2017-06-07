//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSString;

@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol
- (void)faceProcessingStatusForUserInterfaceWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)reclusterFacesWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)resetFaceClusteringStateWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)renderFaceTilesForFaceLocalIdentifiers:(NSArray *)arg1 inAssetWithLocalIdentifier:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)suggestPersonForFaceWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)suggestFacesForPersonWithLocalIdentifier:(NSString *)arg1 toBeConfirmedFaceSuggestions:(NSArray *)arg2 toBeRejectedFaceSuggestions:(NSArray *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)suggestFacesForFacesWithLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)performFaceProcessingOnSRGBImageData:(NSData *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5 context:(NSDictionary *)arg6 reply:(void (^)(NSArray *, NSError *))arg7;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

