//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ML3DatabaseStatementRenderer : NSObject
{
}

+ (id)defaultRenderer;
- (id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2;
- (id)insertStatementWithOptions:(id)arg1;
- (id)insertStatementUsingDefaultValuesForTableName:(id)arg1;
- (id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2;
- (id)savepointReleaseStatementWithName:(id)arg1;
- (id)savepointStatementWithName:(id)arg1;
- (id)rollbackTranscationStatementToSavepointName:(id)arg1;
- (id)rollbackTranscationStatement;
- (id)commitTransactionStatement;
- (id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1;

@end

