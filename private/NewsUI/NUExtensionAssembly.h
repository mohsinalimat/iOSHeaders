//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NFAssembly-Protocol.h>

@class NSString;
@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject <NFAssembly>
{
    id <NUExtensionContextProvider> _extensionContextProvider;
}

@property(readonly, nonatomic) __weak id <NUExtensionContextProvider> extensionContextProvider; // @synthesize extensionContextProvider=_extensionContextProvider;
- (void).cxx_destruct;
- (void)loadPublicContainer:(id)arg1 privateContainer:(id)arg2;
- (id)initWithExtensionContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

