//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionDataCodeAnchorEntity : HDHealthEntity
{
}

+ (id)columnsDefinition;
+ (id)tableAliases;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_predicateForDataCode:(long long)arg1;
+ (_Bool)_getAnchorsWithArray:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)anchorForDataCode:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)setAnchor:(id)arg1 forDataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;

@end

