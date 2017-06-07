//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableSet, NSString, SUClientInterface, SUScriptNativeObject, SUScriptObjectInvocationBatch, WebFrame;

@interface SUScriptObject : NSObject
{
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
    unsigned int _checkOutWhenHidden:1;
    unsigned int _isVisible:1;
    NSString *_className;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (_Bool)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;
- (void)finalizeForWebScript;
@property(readonly) NSMutableArray *scriptAttributeKeys;
- (id)_copyListenersForName:(id)arg1;
- (void)_checkOutAfterVisibilityChange;
@property(readonly, getter=_className) NSString *className;
- (id)stringRepresentation;
- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(_Bool)arg3;
- (_Bool)equals:(id)arg1;
- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(_Bool)arg3;
@property(readonly, retain) WebFrame *webFrame;
- (id)viewControllerFactory;
- (void)unlock;
- (void)tearDownUserInterface;
@property(readonly) _Bool sourceIsTrusted;
- (void)setVisible:(_Bool)arg1;
@property SUScriptObject *parentScriptObject;
@property(retain) SUScriptNativeObject *nativeObject;
- (_Bool)scriptObjectIsCheckedIn:(id)arg1;
- (id)parentViewController;
- (id)newImageWithURL:(id)arg1 scale:(double)arg2;
- (id)newImageWithURL:(id)arg1;
- (void)lock;
- (void)loadImageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isVisible;
- (id)DOMElementWithElement:(id)arg1;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(_Bool)arg3;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
@property(readonly) struct OpaqueJSContext *copyJavaScriptContext;
@property(readonly, retain) SUClientInterface *clientInterface;
- (void)checkOutScriptObjects:(id)arg1;
- (void)checkOutScriptObject:(id)arg1;
- (void)checkInScriptObjects:(id)arg1;
- (void)checkInScriptObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)willPerformBatchedInvocations;
- (id)webThreadMainThreadBatchProxy;
- (id)invocationBatch:(_Bool)arg1;
- (void)didPerformBatchedInvocations;
- (void)checkOutBatchTarget:(id)arg1;

@end

