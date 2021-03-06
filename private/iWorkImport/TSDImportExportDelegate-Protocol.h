//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSDictionary, TSPData, TSUWarning;
@protocol TSDCompatibilityAwareMediaContainer;

@protocol TSDImportExportDelegate <NSObject>
- (void)removeWarning:(TSUWarning *)arg1;
- (void)addWarning:(TSUWarning *)arg1;
- (NSArray *)warnings;

@optional
@property(readonly, nonatomic) _Bool isBrowsingVersions;
@property(readonly, nonatomic) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property(readonly, nonatomic) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
- (void)removeIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1;
- (void)replaceIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 withNewMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg2;
- (void)addIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 incompatibleData:(TSPData *)arg2 compatibilityLevel:(long long)arg3;
@end

