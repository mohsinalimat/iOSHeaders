//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSArray, NSString, RWIProtocolDOMHighlightConfig;

@protocol RWIProtocolDOMDomainHandler <NSObject>
- (void)focusWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)markUndoableStateWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)redoWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)undoWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)moveToWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int *)arg5;
- (void)getAttributesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3;
- (void)resolveNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolRuntimeRemoteObject *))arg2 nodeId:(int)arg3 objectGroup:(id *)arg4;
- (void)releaseBackendNodeIdsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeGroup:(NSString *)arg3;
- (void)pushNodeByBackendIdToFrontendWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 backendNodeId:(int)arg3;
- (void)pushNodeByPathToFrontendWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 path:(NSString *)arg3;
- (void)highlightFrameWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 frameId:(NSString *)arg3 contentColor:(id *)arg4 contentOutlineColor:(id *)arg5;
- (void)hideHighlightWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)highlightNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg3 nodeId:(int *)arg4 objectId:(id *)arg5;
- (void)highlightSelectorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 highlightConfig:(RWIProtocolDOMHighlightConfig *)arg3 selectorString:(NSString *)arg4 frameId:(id *)arg5;
- (void)highlightQuadWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 quad:(NSArray *)arg3 color:(id *)arg4 outlineColor:(id *)arg5 usePageCoordinates:(_Bool *)arg6;
- (void)highlightRectWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 color:(id *)arg7 outlineColor:(id *)arg8 usePageCoordinates:(_Bool *)arg9;
- (void)setInspectModeEnabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 enabled:(_Bool)arg3 highlightConfig:(id *)arg4;
- (void)requestNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 objectId:(NSString *)arg3;
- (void)discardSearchResultsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 searchId:(NSString *)arg3;
- (void)getSearchResultsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 searchId:(NSString *)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;
- (void)performSearchWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, int))arg2 query:(NSString *)arg3 nodeIds:(id *)arg4;
- (void)setOuterHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 outerHTML:(NSString *)arg4;
- (void)getOuterHTMLWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 nodeId:(int)arg3;
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolDOMAccessibilityProperties *))arg2 nodeId:(int)arg3;
- (void)getEventListenersForNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3 objectGroup:(id *)arg4;
- (void)removeAttributeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 name:(NSString *)arg4;
- (void)setAttributesAsTextWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 text:(NSString *)arg4 name:(id *)arg5;
- (void)setAttributeValueWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 name:(NSString *)arg4 value:(NSString *)arg5;
- (void)removeNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3;
- (void)setNodeValueWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 value:(NSString *)arg4;
- (void)setNodeNameWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 name:(NSString *)arg4;
- (void)querySelectorAllWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 nodeId:(int)arg3 selector:(NSString *)arg4;
- (void)querySelectorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(int))arg2 nodeId:(int)arg3 selector:(NSString *)arg4;
- (void)requestChildNodesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 nodeId:(int)arg3 depth:(int *)arg4;
- (void)getDocumentWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolDOMNode *))arg2;
@end

