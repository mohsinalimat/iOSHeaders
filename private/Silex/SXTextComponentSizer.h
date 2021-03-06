//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

#import <Silex/SXTextSourceDataSource-Protocol.h>

@class NSString, SXTextLayouter, SXTextResizer;

@interface SXTextComponentSizer : SXComponentSizer <SXTextSourceDataSource>
{
    SXTextResizer *_textResizer;
    SXTextLayouter *_textLayouter;
}

@property(retain, nonatomic) SXTextLayouter *textLayouter; // @synthesize textLayouter=_textLayouter;
@property(retain, nonatomic) SXTextResizer *textResizer; // @synthesize textResizer=_textResizer;
- (void).cxx_destruct;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)textStyleForTextSource:(id)arg1;
- (id)textResizerForTextSource:(id)arg1;
- (id)documentControllerForTextSource:(id)arg1;
- (id)existingExclusionPathForComponentWithIdentifier:(id)arg1;
- (id)documentController;
@property(readonly, nonatomic) unsigned long long stringLength;
- (double)verticalPositionForRange:(struct _NSRange)arg1;
- (id)snapLines;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (void)removeAllExclusionPaths;
- (void)addExclusionPath:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 context:(id)arg4 layoutAttributes:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

