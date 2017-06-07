//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TDLayerStackRenditionSpec;

@interface _TDLayerStackFilterHelper : NSObject
{
    TDLayerStackRenditionSpec *_layerStackRendition;
    NSMutableArray *_excludedIdioms;
    NSMutableArray *_excludedSubtypes;
    NSMutableArray *_excludedScaleFactors;
    NSMutableArray *_excludedHorizontalSizeClasses;
    NSMutableArray *_excludedVerticalSizeClasses;
    NSMutableArray *_excludedDirections;
    NSMutableArray *_excludedLayers;
    NSMutableArray *_excludedPresentationStates;
    NSMutableArray *_excludedSizes;
    NSMutableArray *_excludedStates;
    NSMutableArray *_excludedValues;
}

@property(retain, nonatomic) TDLayerStackRenditionSpec *layerStackRendition; // @synthesize layerStackRendition=_layerStackRendition;
@property(retain, nonatomic) NSMutableArray *excludedValues; // @synthesize excludedValues=_excludedValues;
@property(retain, nonatomic) NSMutableArray *excludedStates; // @synthesize excludedStates=_excludedStates;
@property(retain, nonatomic) NSMutableArray *excludedSizes; // @synthesize excludedSizes=_excludedSizes;
@property(retain, nonatomic) NSMutableArray *excludedPresentationStates; // @synthesize excludedPresentationStates=_excludedPresentationStates;
@property(retain, nonatomic) NSMutableArray *excludedLayers; // @synthesize excludedLayers=_excludedLayers;
@property(retain, nonatomic) NSMutableArray *excludedDirections; // @synthesize excludedDirections=_excludedDirections;
@property(retain, nonatomic) NSMutableArray *excludedVerticalSizeClasses; // @synthesize excludedVerticalSizeClasses=_excludedVerticalSizeClasses;
@property(retain, nonatomic) NSMutableArray *excludedHorizontalSizeClasses; // @synthesize excludedHorizontalSizeClasses=_excludedHorizontalSizeClasses;
@property(retain, nonatomic) NSMutableArray *excludedScaleFactors; // @synthesize excludedScaleFactors=_excludedScaleFactors;
@property(retain, nonatomic) NSMutableArray *excludedSubtypes; // @synthesize excludedSubtypes=_excludedSubtypes;
@property(retain, nonatomic) NSMutableArray *excludedIdioms; // @synthesize excludedIdioms=_excludedIdioms;
- (void)dealloc;
- (_Bool)allowKey:(id)arg1;
- (void)establishExclusionsWithHelper:(id)arg1 idioms:(id)arg2 sizeClasses:(id)arg3;
- (id)init;

@end

