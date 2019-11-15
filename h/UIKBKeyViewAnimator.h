//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

// #import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate>
{
    _Bool _disabled;
}

+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void)reset;
- (void)endTransitionForKeyView:(id)arg1;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize)arg2;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(_Bool)arg3;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id)arg4;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id)arg4;
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;
- (id)keycapRightSelectRightTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapPrimaryExitTransform;
- (id)keycapRightTransform;
- (id)keycapLeftTransform;
- (id)keycapAlternateDualStringTransform:(id)arg1;
- (id)keycapAlternateTransform:(id)arg1;
- (id)keycapPrimaryDualStringTransform:(id)arg1;
- (id)keycapPrimaryTransform;
- (id)keycapNullTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGRect secondaryGlyphNormalizedExitRect;
@property(readonly, nonatomic) struct CGRect primaryGlyphNormalizedExitRect;
- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(id)arg3;
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(id)arg3;
- (double)delayedDeactivationTimeForKeyView:(id)arg1;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1;
@property(readonly, nonatomic) _Bool shouldPurgeKeyViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
// @property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

