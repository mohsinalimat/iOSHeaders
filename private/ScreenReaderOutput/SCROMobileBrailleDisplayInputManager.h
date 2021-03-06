//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ScreenReaderOutput/SCROBrailleDisplayInputManagerProtocol-Protocol.h>

@class NSArray, NSBundle, NSMutableDictionary, NSSet, NSString;

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol>
{
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
    NSBundle *_bundle;
    NSArray *_sixDotCommands;
    NSArray *_eightDotCommands;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)setUserDefaults:(id)arg1 forModelIdentifier:(id)arg2;
- (id)userDefaultsForModelIdentifier:(id)arg1;
- (struct __CFString *)defaultsKeyForModelIdentifier:(id)arg1;
- (id)buttonNamesAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (id)commandAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (id)inputIdentifierAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (unsigned long long)countForDisplayWithToken:(int)arg1;
- (id)_commandsFromBrailleInputMode:(int)arg1;
- (id)_eightDotCommands;
- (id)_sixDotCommands;
- (unsigned long long)userAssignedCommandCountForDisplayWithToken:(int)arg1;
- (void)removeAllUserAssignedCommandsForDisplayWithToken:(int)arg1;
- (void)setCommand:(id)arg1 forInputIdentifier:(id)arg2 forDisplayWithToken:(int)arg3;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(int)arg2;
- (void)setCommand:(id)arg1 forBrailleKey:(id)arg2;
- (id)commandForBrailleKey:(id)arg1;
- (id)_commandForHidUsage:(id)arg1;
- (id)modelIdentifierForDisplayWithToken:(int)arg1;
- (id)driverIdentifierForDisplayWithToken:(int)arg1;
- (id)commandDictionaryForDisplayWithToken:(int)arg1;
- (void)configureWithDriverConfiguration:(id)arg1;
- (id)init;
- (id)_bundle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

