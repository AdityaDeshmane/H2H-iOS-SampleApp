//
//  H2HCustomCollectionViewController.h
//  DemoCollectionView
//
//  Created by Pratima.Ghadage on 08/02/17.
//  Copyright © 2017 Pratima.Ghadage. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "H2HDTOCustomCollection.h"

@interface H2HCustomCollectionViewController : UIViewController

-(void)setDTOCustomCollection:(H2HDTOCustomCollection *) customCollection;

-(void)setVisibleTiles:(NSMutableArray<H2HModelGridTile *> *) arrVisibleTiles;

-(void)reloadCollectionView;

-(UIView *)getCustomCollectionView;

-(void)makeTileFullscreen:(EnumGridTileType) tileType;

-(void)updateGridStyle:(EnumGridStyle)gridStyle;

-(H2HDTOCustomCollection *)getDTOCustomCollection;

-(EnumGridStyle)getCurrrentGridStyle;

-(NSArray<H2HModelGridTile *> *)getArrayOfVisibleTiles;

@end
