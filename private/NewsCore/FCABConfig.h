//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCABConfig : NSObject
{
    unsigned long long _configID;
    NSString *_title;
    NSString *_configLog;
}

@property(readonly, nonatomic) NSString *configLog; // @synthesize configLog=_configLog;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long configID; // @synthesize configID=_configID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfigID:(unsigned long long)arg1 title:(id)arg2 configLog:(id)arg3;

@end

