//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, NSThread;

__attribute__((visibility("hidden")))
@interface _ML3DatabaseConnectionWrapper : NSObject
{
    ML3DatabaseConnection *_connection;
    NSThread *_owningThread;
    NSThread *_borrowingThread;
    unsigned long long _useCount;
}

@property(nonatomic) unsigned long long useCount; // @synthesize useCount=_useCount;
@property(retain, nonatomic) NSThread *borrowingThread; // @synthesize borrowingThread=_borrowingThread;
@property(retain, nonatomic) NSThread *owningThread; // @synthesize owningThread=_owningThread;
@property(retain, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConnection:(id)arg1;

@end

