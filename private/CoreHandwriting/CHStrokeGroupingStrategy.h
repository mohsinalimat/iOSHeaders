//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CHRecognitionSessionResult, NSArray;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingStrategy : NSObject
{
    id <CHStrokeProvider> _strokeProvider;
    CHRecognitionSessionResult *_sessionLastResult;
    NSArray *_locales;
}

+ (void)enumeratePointsForStroke:(id)arg1 interpolationType:(long long)arg2 resolution:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (_Bool)_isPointEnumerationSupportedForStroke:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, retain, nonatomic) CHRecognitionSessionResult *sessionLastResult; // @synthesize sessionLastResult=_sessionLastResult;
@property(readonly, retain, nonatomic) id <CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
- (id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2;
- (void)getFirstStrokeIdentifier:(id *)arg1 lastStrokeIdentifier:(id *)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5;
- (id)strokesForIdentifiers:(id)arg1;
- (void)getAddedStrokes:(id *)arg1 removedStrokeIdentifiers:(id *)arg2;
- (void)dealloc;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 orderedStrokesIDs:(id *)arg2;
- (id)updatedGroupingResultWithCancellationBlock:(CDUnknownBlockType)arg1;

@end

