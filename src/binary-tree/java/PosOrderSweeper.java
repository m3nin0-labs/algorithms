package algorithms.tree;

import java.util.Objects;

/**
 * Representação da varredura Pós-ordem (esquerda-direita-raiz)
 * 
 * @author felipe
 *
 */
public class PosOrderSweeper implements Sweeper {
	@Override
	public void sweep(TreeNode<?> treeNode) {
		if (!Objects.isNull(treeNode.getLeftLeaf()))
			sweep(treeNode.getLeftLeaf());
		if (!Objects.isNull(treeNode.getRightLeaf()))
			sweep(treeNode.getRightLeaf());

		System.out.println(treeNode.getData());
	}
}
