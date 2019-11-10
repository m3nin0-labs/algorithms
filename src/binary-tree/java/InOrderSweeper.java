package algorithms.tree;

import java.util.Objects;

/**
 * Representação da varredura In-ordem (esquerda-raiz-direita)
 * @author felipe
 *
 */
public class InOrderSweeper implements Sweeper {
	@Override
	public void sweep(TreeNode<?> treeNode) {
		if (!Objects.isNull(treeNode.getLeftLeaf()))
			sweep(treeNode.getLeftLeaf());

		System.out.println(treeNode.getData());

		if (!Objects.isNull(treeNode.getRightLeaf()))
			sweep(treeNode.getRightLeaf());
	}
}
