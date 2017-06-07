//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol SFStateMachineDelegate;

@interface SFStateMachine : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    _Bool _shouldLogStateTransitions;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    id <SFStateMachineDelegate> _delegate;
}

@property(nonatomic) _Bool shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
@property id <SFStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
- (void).cxx_destruct;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (_Bool)_setCurrentState:(id)arg1;
@property(copy) NSString *currentState; // @synthesize currentState=_currentState;
- (_Bool)applyState:(id)arg1;
- (id)target;
- (void)dealloc;
- (id)init;

@end

