//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding>
{
    int _statusBarStyleOverrides;
    int _pid;
    _Bool _exclusive;
    _Bool _showsWhenForeground;
    NSString *_statusString;
    NSString *_uniqueIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic) _Bool showsWhenForeground; // @synthesize showsWhenForeground=_showsWhenForeground;
@property(nonatomic, getter=isExclusive) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(_Bool)arg3 showsWhenForeground:(_Bool)arg4 uniqueIdentifier:(id)arg5;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(_Bool)arg3 showsWhenForeground:(_Bool)arg4;
- (id)init;

@end

