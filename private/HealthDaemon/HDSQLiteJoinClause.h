//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteJoinClause : NSObject
{
    NSString *_joinAsName;
    NSString *_localTable;
    Class _targetEntityClass;
    NSString *_localReferenceProperty;
    NSString *_targetKeyProperty;
    long long _joinType;
}

+ (id)leftJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;
+ (id)innerJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;
@property(readonly, nonatomic) long long joinType; // @synthesize joinType=_joinType;
@property(readonly, copy, nonatomic) NSString *targetKeyProperty; // @synthesize targetKeyProperty=_targetKeyProperty;
@property(readonly, copy, nonatomic) NSString *localReferenceProperty; // @synthesize localReferenceProperty=_localReferenceProperty;
@property(readonly, nonatomic) Class targetEntityClass; // @synthesize targetEntityClass=_targetEntityClass;
@property(readonly, copy, nonatomic) NSString *localTable; // @synthesize localTable=_localTable;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *joinAsName;
- (id)SQLJoinClause;
- (id)_initWithJoinType:(long long)arg1 fromTable:(id)arg2 toTargetEntity:(Class)arg3 as:(id)arg4 localReference:(id)arg5 targetKey:(id)arg6;

@end

