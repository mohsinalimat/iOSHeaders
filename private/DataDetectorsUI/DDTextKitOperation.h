//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDOperation.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface DDTextKitOperation : DDOperation
{
    struct _NSRange _range;
    int _editCount;
}

@property struct _NSRange range; // @synthesize range=_range;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (_Bool)needsToStartOver;
- (_Bool)doURLificationOnDocument;
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;
- (_Bool)_addResultsToAttributesInStorage:(id)arg1;
- (_Bool)_addResultToAttributes:(id)arg1 inStorage:(id)arg2;
- (struct __DDScanQuery *)_createScanQueryForBackend;
- (_Bool)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (void)textDidChange:(id)arg1;
- (void)cleanup;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UITextView *container; // @dynamic container;

@end

