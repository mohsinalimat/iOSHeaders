//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

@interface CallDBMigrator : NSObject
{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (void).cxx_destruct;
- (void)migrate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

