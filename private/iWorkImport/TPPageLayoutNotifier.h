//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TPPageControllerLayoutObserver-Protocol.h>

@class NSString, TPPageController;

__attribute__((visibility("hidden")))
@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver>
{
    TPPageController *_pageController;
}

- (void).cxx_destruct;
- (void)pageController:(id)arg1 didLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(_Bool)arg4;
- (void)teardown;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

