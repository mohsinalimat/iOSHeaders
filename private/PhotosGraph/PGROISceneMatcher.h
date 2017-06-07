//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject
{
    NSMutableDictionary *_positiveSceneIdentifiersByROILabels;
    NSMutableDictionary *_negativeSceneIdentifiersByROILabels;
}

+ (id)negativeSceneNamesByROILabel;
+ (id)positiveSceneNamesByROILabel;
+ (id)urbanSceneNames;
+ (id)waterSceneNames;
+ (id)nonNatureSceneNames;
+ (id)natureSceneNames;
+ (id)mountainSceneNames;
+ (id)beachSceneNames;
+ (id)sharedROISceneMatcher;
- (void).cxx_destruct;
- (id)negativeSceneIdentifiersForROILabel:(id)arg1;
- (id)positiveSceneIdentifiersForROILabel:(id)arg1;
- (id)_sceneIdentifierFromSceneNames:(id)arg1;

@end

