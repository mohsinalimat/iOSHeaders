//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSPredicateVisitor-Protocol.h>

@class NSError, NSPredicate, NSSet;

@interface RTPredicateValidator : NSObject <NSPredicateVisitor>
{
    _Bool _validated;
    NSPredicate *_predicate;
    NSSet *_allowedKeys;
    NSError *_error;
}

+ (_Bool)validatePredicate:(id)arg1 allowedKeys:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSSet *allowedKeys; // @synthesize allowedKeys=_allowedKeys;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool validated; // @synthesize validated=_validated;
- (void).cxx_destruct;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (_Bool)validateWithError:(id *)arg1;
- (id)initWithPredicate:(id)arg1 allowedKeys:(id)arg2;

@end

