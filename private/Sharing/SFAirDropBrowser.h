//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol SFAirDropBrowserDelegate;

@interface SFAirDropBrowser : NSObject
{
    struct __SFBrowser *_browser;
    NSMutableDictionary *_nodes;
    NSString *_sessionID;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
}

@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

