//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary, NSString, TSKAnnotationAuthor, TSKSelectionPath, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TPArchivedViewState : TSPObject
{
    struct CGRect _visibleRect;
    TSKSelectionPath *_compatibilitySelectionPath;
    TSKSelectionPath *_selectionPath;
    TSWPSelection *_bodySelection;
    _Bool _masterDrawablesSelectable;
    NSMutableDictionary *_chartUIState;
    _Bool _rulerVisible;
    _Bool _layoutBordersVisible;
    _Bool _wordCountHUDVisible;
    _Bool _showsComments;
    _Bool _showsCTMarkup;
    _Bool _showsCTDeletions;
    _Bool _hasShowsCTMarkup;
    _Bool _hasShowsCTDeletions;
    _Bool _changeTrackingPaused;
    _Bool _showsPageNavigator;
    _Bool _showsActivitySidebar;
    int _viewScaleMode;
    double _viewScale;
    struct CGRect _windowFrame;
    int _viewScaleModeiOS;
    NSString *_selectedInspectorSwitchSegmentIdentifier;
    _Bool _inspectorHidden;
    int _wordCountHUDType;
    struct CGPoint _wordCountHUDPosition;
    _Bool _showUserDefinedGuides;
    NSString *_authorFilterName;
    TSKAnnotationAuthor *_authorFilter;
}

@property(readonly, nonatomic) NSMutableDictionary *chartUIState; // @synthesize chartUIState=_chartUIState;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property(retain, nonatomic) TSKSelectionPath *compatibilitySelectionPath; // @synthesize compatibilitySelectionPath=_compatibilitySelectionPath;
- (void)captureViewStateWithProvider:(id)arg1;
- (void)readViewStateWithConsumer:(id)arg1;
- (_Bool)showsComments;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end

