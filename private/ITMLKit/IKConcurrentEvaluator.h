//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IKConcurrentEvaluator : NSObject
{
    NSMutableDictionary *_getters;
}

@property(retain, nonatomic) NSMutableDictionary *getters; // @synthesize getters=_getters;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)addEvaluationBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;

@end

