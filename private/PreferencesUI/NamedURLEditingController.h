//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PreferencesUI/URLEditingController.h>

@class PSUIWebRestrictionsController;

@interface NamedURLEditingController : URLEditingController
{
    _Bool _saved;
    PSUIWebRestrictionsController *_URLSaveController;
}

@property(retain, nonatomic) PSUIWebRestrictionsController *URLSaveController; // @synthesize URLSaveController=_URLSaveController;
@property(nonatomic) _Bool saved; // @synthesize saved=_saved;
- (void).cxx_destruct;
- (id)controlledURL:(id)arg1;
- (void)setControlledURL:(id)arg1 specifier:(id)arg2;
- (id)controlledURLTitle:(id)arg1;
- (void)setControlledURLTitle:(id)arg1 specifier:(id)arg2;
- (void)saveURL;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)viewDidAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;

@end

