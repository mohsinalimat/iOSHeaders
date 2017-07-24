//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKJSDOMDocumentAppBridgeInternal-Protocol.h>
#import <ITMLKit/IKStyleMediaQueryEvaluator-Protocol.h>

@class IKAppContext, IKDOMDocument, IKHeadElement, IKJSNavigationDocument, IKJSObject, IKViewElement, IKViewElementStyleFactory, NSError, NSMapTable, NSMutableDictionary, NSString;
@protocol IKAppDocumentDelegate;

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridgeInternal, IKStyleMediaQueryEvaluator>
{
    NSMutableDictionary *_mediaQueryCache;
    _Bool _parsingDOM;
    NSMapTable *_viewElementRegistry;
    _Bool _isViewElementRegistryDirty;
    _Bool _updated;
    _Bool _subtreeUpdated;
    IKAppContext *_appContext;
    IKDOMDocument *_jsDocument;
    NSString *_identifier;
    IKHeadElement *_headElement;
    IKViewElement *_navigationBarElement;
    IKViewElement *_toolbarElement;
    IKViewElement *_templateElement;
    NSError *_error;
    id <IKAppDocumentDelegate> _delegate;
    double _impressionThreshold;
    NSMutableDictionary *_impressions;
    IKJSObject *_owner;
    IKViewElementStyleFactory *_styleFactory;
}

@property(retain, nonatomic) IKViewElementStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;
@property(readonly, nonatomic) __weak IKJSObject *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSMutableDictionary *impressions; // @synthesize impressions=_impressions;
@property(nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(getter=isSubtreeUpdated) _Bool subtreeUpdated; // @synthesize subtreeUpdated=_subtreeUpdated;
@property(nonatomic, getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic) __weak id <IKAppDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
@property(retain) IKViewElement *toolbarElement; // @synthesize toolbarElement=_toolbarElement;
@property(retain) IKViewElement *navigationBarElement; // @synthesize navigationBarElement=_navigationBarElement;
@property(retain) IKHeadElement *headElement; // @synthesize headElement=_headElement;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak IKDOMDocument *jsDocument; // @synthesize jsDocument=_jsDocument;
@property(readonly) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (void)_setViewElementStylesDirtyAndDispatch:(_Bool)arg1;
- (_Bool)_clearUpdatesForElement:(id)arg1;
- (void)_updateWithXML:(id)arg1;
- (id)_viewElementForNodeID:(unsigned long long)arg1;
- (_Bool)evaluateStyleMediaQueryList:(id)arg1;
- (_Bool)_isUpdateAllowed;
- (void)runTestWithName:(id)arg1 options:(id)arg2;
- (void)scrollToTop;
- (id)impressionsMatching:(id)arg1 reset:(_Bool)arg2;
- (id)recordedImpressions:(_Bool)arg1;
- (id)recordedImpressions;
- (id)snapshotImpressions;
- (void)setNeedsUpdateForDocument:(id)arg1;
- (void)updateForDocument:(id)arg1;
- (id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2;
- (void)setViewElementStylesDirty;
- (void)recordImpressionsForViewElements:(id)arg1;
- (void)onViewAttributesChangeWithArguments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onPerformanceMetricsChange:(id)arg1;
- (void)onImpressionsChange:(id)arg1;
- (void)onUpdate;
- (void)onNeedsUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)onDisappear;
- (void)onAppear;
- (void)onUnload;
- (void)onLoad;
@property(readonly, nonatomic) __weak IKJSNavigationDocument *navigationDocument;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

