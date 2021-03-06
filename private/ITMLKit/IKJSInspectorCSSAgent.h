//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolCSSDomainHandler-Protocol.h>

@class IKJSInspectorController, IKViewElementStyleFactory, NSMapTable, NSMutableDictionary, NSString, RWIProtocolCSSStyleSheetHeader;

@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler>
{
    NSMutableDictionary *_inlineStyleMap;
    RWIProtocolCSSStyleSheetHeader *_templateStylesheetHeader;
    IKViewElementStyleFactory *_styleFactory;
    NSMapTable *_authorStylesheets;
    IKJSInspectorController *_controller;
}

+ (id)_cssSourceRangeForRange:(struct _NSRange)arg1 newLineIndexSet:(id)arg2;
+ (struct _NSRange)_rangeForSourceRange:(id)arg1 newLineIndexSet:(id)arg2;
+ (id)_newLineIndexSetForCSSMarkup:(id)arg1;
+ (id)_cssRuleForRule:(id)arg1 withOrdinal:(int)arg2 forStyleSheetHeader:(id)arg3 forStyleMarkup:(id)arg4 styleMarkupNewLineIndexSet:(id)arg5;
+ (id)_cssSelectorListWithSelectorList:(id)arg1 forStyleMarkup:(id)arg2 styleMarkupNewLineIndexSet:(id)arg3;
+ (id)_cssStyleWithDeclarationList:(id)arg1 forStyleMarkup:(id)arg2 styleMarkupNewLineIndexSet:(id)arg3 existingStyle:(id)arg4;
@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)_getMatchedStyleRulesForNode:(id)arg1;
- (id)_getMatchedTemplateStylesForNode:(id)arg1;
- (id)_updatedInlineStyleForNode:(int)arg1 withStyleString:(id)arg2;
- (id)_stylesheetBodyForStylesheetId:(id)arg1;
- (id)_styleNodeForStylesheetId:(id)arg1;
- (void)getNamedFlowCollectionWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 documentNodeId:(int)arg3;
- (void)forcePseudoStateWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 forcedPseudoClasses:(id)arg4;
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getSupportedCSSPropertiesWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)addRuleWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 contextNodeId:(int)arg3 selector:(id)arg4;
- (void)addRuleWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3 selector:(id)arg4;
- (void)createStyleSheetWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3;
- (void)setRuleSelectorWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 ruleId:(id)arg3 selector:(id)arg4;
- (void)togglePropertyWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 disable:(_Bool)arg5;
- (void)setPropertyTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 text:(id)arg5 overwrite:(_Bool)arg6;
- (void)setStyleTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleId:(id)arg3 text:(id)arg4;
- (void)setStyleSheetTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3 text:(id)arg4;
- (void)getStyleSheetTextWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3;
- (void)getStyleSheetWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 styleSheetId:(id)arg3;
- (void)getAllStyleSheetsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getComputedStyleForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getInlineStylesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3;
- (void)getMatchedStylesForNodeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 nodeId:(int)arg3 includePseudo:(_Bool *)arg4 includeInherited:(_Bool *)arg5;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)resetStylesFromNode:(id)arg1;
- (void)mediaQueryResultDidChange;
- (void)updateStylesheets;
- (id)initWithInspectorController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

