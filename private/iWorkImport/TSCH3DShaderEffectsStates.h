//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderEffectsStates : NSObject
{
    NSMutableDictionary *mObjects;
}

- (void)clear;
- (void)setState:(id)arg1 forStateInfo:(id)arg2;
- (id)stateForStateInfo:(id)arg1 createIfNil:(_Bool)arg2;
- (id)valueStateForKey:(id)arg1;
- (void)setValueState:(id)arg1 forKey:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

