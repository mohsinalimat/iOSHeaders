//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLitePredicate;

@interface _HDDatabasePruningOperation : NSObject
{
    Class _entityClass;
    HDSQLitePredicate *_predicate;
}

@property(readonly, nonatomic) HDSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (void).cxx_destruct;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2;

@end

