//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCETaggedDoubleListObject : NSObject
{
    struct TSCETaggedDoubleList _taggedList;
}

+ (id)createFromVector:(const struct TSCEVector *)arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 evaluationContext:(struct TSCEEvaluationContext *)arg4 ignoreError:(_Bool)arg5 ignoreDuplicates:(_Bool)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSCETaggedDoubleList *)taggedDoubleList;

@end

