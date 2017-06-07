//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLMomentGenerationDataManagement-Protocol.h>

@class NSDictionary, NSOrderedSet;
@protocol PLMomentData;

@protocol PLMomentGenerationDataManagement_Private <PLMomentGenerationDataManagement>

@optional
- (NSDictionary *)generationOptions;
- (void)setupPhotoLibrary;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(_Bool)arg2;
- (void)invalidateLocationDataForAssetsInMoment:(id <PLMomentData>)arg1;
- (void)insertMomentIntoAllMoments:(id <PLMomentData>)arg1 atIndex:(unsigned long long)arg2;
- (void)removeMomentFromAllMoments:(id <PLMomentData>)arg1;
- (NSOrderedSet *)allMomentsInLibrary;
@end

