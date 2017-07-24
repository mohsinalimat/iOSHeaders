//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CNTask : NSObject
{
    _Bool _cancelled;
    NSString *_name;
}

+ (id)taskWithName:(id)arg1 error:(id)arg2;
+ (id)taskWithError:(id)arg1;
+ (id)taskWithName:(id)arg1 result:(id)arg2;
+ (id)taskWithResult:(id)arg1;
+ (id)taskWithName:(id)arg1 subtasks:(id)arg2;
+ (id)taskWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)taskWithBlock:(CDUnknownBlockType)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)run;
- (id)run:(id *)arg1;
- (_Bool)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (id)initWithName:(id)arg1;
- (id)init;

@end

