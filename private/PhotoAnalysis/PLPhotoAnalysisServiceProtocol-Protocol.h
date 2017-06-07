//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisJobServiceProtocol-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceFaceProcessingProtocol-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceSceneClassificationProtocol-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceTaxonomyProtocol-Protocol.h>

@class NSArray, NSDictionary;

@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol, PLPhotoAnalysisGraphServiceProtocol, PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceSceneClassificationProtocol, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
- (void)cancelOperationsWithIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)dumpAnalysisStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)notifyPhotoLibraryOpenedWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
@end

