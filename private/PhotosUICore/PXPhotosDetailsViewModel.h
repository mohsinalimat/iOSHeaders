//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutablePhotosDetailsViewModel-Protocol.h>

@class NSString, PXSectionedSelectionManager;

@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel>
{
    _Bool _selecting;
    _Bool _supportsSelection;
    _Bool _supportsFaceMode;
    _Bool _faceModeEnabled;
    PXSectionedSelectionManager *_selectionManager;
}

@property(readonly, nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled; // @synthesize faceModeEnabled=_faceModeEnabled;
@property(readonly, nonatomic) _Bool supportsFaceMode; // @synthesize supportsFaceMode=_supportsFaceMode;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) _Bool supportsSelection; // @synthesize supportsSelection=_supportsSelection;
@property(readonly, nonatomic, getter=isSelecting) _Bool selecting; // @synthesize selecting=_selecting;
- (void).cxx_destruct;
- (void)setFaceModeEnabled:(_Bool)arg1;
- (void)setSupportsFaceMode:(_Bool)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setSupportsSelection:(_Bool)arg1;
- (void)setSelecting:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

