//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPEventClassificationType, IPFeatureData, NSArray, NSMutableArray, NSMutableSet;

@interface IPFeatureScanner : NSObject
{
    _Bool _subjectContainsDate;
    _Bool _hasCheckedEventType;
    NSArray *_messageUnits;
    NSMutableArray *_detectedEvents;
    NSArray *_stitchedEvents;
    NSArray *_filteredDetectedEvents;
    unsigned long long _resultType;
    NSArray *_subjectDataDetectorsFeatures;
    IPFeatureData *_dateInSubjectFeatureData;
    NSMutableArray *_allMessageUnitsFeatures;
    IPEventClassificationType *_eventType;
    NSMutableSet *_extractedNotesStrings;
}

+ (id)descriptionForScanResultType:(unsigned long long)arg1;
+ (id)featureExtractorsExceptDataDetectorsExtractor;
+ (id)dataDetectorsFeatureExtractor;
+ (void)setEventStoreForTesting:(id)arg1;
+ (_Bool)isNaturalLanguageEventDetectionEnabled;
@property(retain) NSMutableSet *extractedNotesStrings; // @synthesize extractedNotesStrings=_extractedNotesStrings;
@property _Bool hasCheckedEventType; // @synthesize hasCheckedEventType=_hasCheckedEventType;
@property(retain) IPEventClassificationType *eventType; // @synthesize eventType=_eventType;
@property(retain) NSMutableArray *allMessageUnitsFeatures; // @synthesize allMessageUnitsFeatures=_allMessageUnitsFeatures;
@property(retain) IPFeatureData *dateInSubjectFeatureData; // @synthesize dateInSubjectFeatureData=_dateInSubjectFeatureData;
@property(retain) NSArray *subjectDataDetectorsFeatures; // @synthesize subjectDataDetectorsFeatures=_subjectDataDetectorsFeatures;
@property _Bool subjectContainsDate; // @synthesize subjectContainsDate=_subjectContainsDate;
@property unsigned long long resultType; // @synthesize resultType=_resultType;
@property(retain) NSArray *filteredDetectedEvents; // @synthesize filteredDetectedEvents=_filteredDetectedEvents;
@property(retain) NSArray *stitchedEvents; // @synthesize stitchedEvents=_stitchedEvents;
@property(retain) NSMutableArray *detectedEvents; // @synthesize detectedEvents=_detectedEvents;
@property(retain) NSArray *messageUnits; // @synthesize messageUnits=_messageUnits;
- (void).cxx_destruct;
- (id)cleanedStringForFeatureData:(id)arg1;
- (id)stringsFromDataFeatures:(id)arg1 matchingTypes:(id)arg2;
- (id)bestEventFromEvents:(id)arg1;
- (void)normalizedEvents:(id)arg1;
- (id)normalizedAllDayDateFromDate:(id)arg1;
- (id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2;
- (id)entertainmentPOINamesFromFeatures:(id)arg1;
- (id)restaurantAndBarPOINamesFromFeatures:(id)arg1;
- (id)artisNamesFromFeatures:(id)arg1;
- (id)sportTeamNamesFromFeatures:(id)arg1;
- (id)movieTitlesFromFeatures:(id)arg1;
- (id)notesStringsFromFeatures:(id)arg1;
- (id)decoratedTitle:(id)arg1 withSubtitles:(id)arg2;
- (id)messageSenderName;
- (id)emailParticipantNames;
- (void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(_Bool)arg3 features:(id)arg4;
- (id)_regroupEventsWithSpreadTimeAsAllDayEvents:(id)arg1;
- (id)_stitchedEventsFromEvents:(id)arg1;
- (id)stitchedEventsFromEvents:(id)arg1;
- (void)processScanOfMessageUnit:(id)arg1;
- (void)doSynchronousScanWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetScanState;
- (_Bool)isEventProposalFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 eventIsTenseDependent:(_Bool)arg4 extractedFromSubject:(_Bool)arg5 clusterType:(unsigned long long *)arg6;
- (id)subjectEventVocabularyIgnoreDateKeyword:(id)arg1;
- (id)subjectEventVocabularyRejectionKeyword:(id)arg1;
- (_Bool)features:(id)arg1 containDateOlderThan:(id)arg2 preciseTimeOnly:(_Bool)arg3;
- (unsigned long long)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2;
- (_Bool)isDateRoundedTo5Minutes:(id)arg1;
- (_Bool)isDateAroundNoon:(id)arg1;
- (unsigned long long)featureSentencePolarityForFeatureAtIndex:(unsigned long long)arg1 inFeatures:(id)arg2;
- (_Bool)isBlacklistedSender:(id)arg1;
- (_Bool)shouldReplaceSendDateWithCurrentDate;
- (id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
- (id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
- (id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2;
- (id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(struct _NSRange)arg2;
- (unsigned long long)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2;
- (id)_sortedFeaturesByRange:(id)arg1;

@end

